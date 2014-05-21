__author__ = 'chapo'


import MySQLdb
import time
import socket
import os
import config




encabezado39msn1 = "GET /A/B/7F260009813900000008"
encabezado39msn2 = "GET /A/B/7F260009823900000008"
encabezado39msn3 = "GET /A/B/7F260009833900000008"
encabezado39msn4 = "GET /A/B/7F260009843900000008"
_39 = ""
final39 = " HTTP/1.1"


def adquierefecha(ip):
    global comando, _39
    # Construct DB object
    secuenciaIp = "192.168.1.{0}".format(ip)

    try:
        db = MySQLdb.connect(host=secuenciaIp, user='admin', passwd='petrolog', db='eventosg4')
        # Traemos el Comando que toca dependiendo del estado en que se debe de encotrar el equipo
        cursor = db.cursor(MySQLdb.cursors.DictCursor)
        cursor.execute('SELECT fecha_adquisicion FROM eventos')
        temp = cursor.fetchone()
        fechaBd = temp['fecha_adquisicion']
        hora = str(fechaBd)
        fecha =str(fechaBd)
        fechaAcomprar = "{0} {1}".format(hora[11:],fecha[:-9])


        r = os.system('ntpdate {0}'.format(config.ntpserver))
        aa= time.strptime(fechaAcomprar, '%H:%M:%S %Y-%m-%d')
        if r == 0:
            tiempoDB = time.mktime(aa)
            tiempoSys = time.mktime(time.localtime())
            config.logging.info( tiempoDB)
            config.logging.info( tiempoSys)
            minutosDesincronizados = (tiempoSys - tiempoDB)/60
            entero =int(round(minutosDesincronizados))
            config.logging.info( hex(entero))

            config.logging.info( format(entero, '#06X'))
            valor =format(entero, '#06X')

            if entero >=11:
                _39 = "{0}{1}".format(_39,valor[2:])
                config.logging.info( minutosDesincronizados)
            else:
                _39="{0}{1}".format(_39,"0001")
                config.logging.info( "0")
        else:
            config.logging.debug( "No internet   codigo de error 6")
            _39="{0}{1}".format(_39,"0006")
        # Close DB object
        cursor.close()
        db.close()
    except MySQLdb.Error, e:
        config.logging.debug( "Error {0}".format(e.args))
        _39="{0}{1}".format(_39,"0005")

#GET /A/B/7F260009333900000008 0000 0000 0000 0000 0000 0000 0000 0000 7561 0000 051F FFED 0000 0000 HTTP/1.1
ip =1


while True:
    try:
        if ip <= 14:
            adquierefecha(ip)
            config.logging.info( _39)
            if ip == 14:
                s=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                s.connect(("nebulalisten.com",3001))
                s.send("{0}{1}{2}".format(encabezado39msn1,_39,final39))      #"0000000000000000000000000000000075610000051FFFED00000000 HTTP/1.1")
                config.logging.info( s.recv(1024))
                s.close()
                _39 =""
            ip+=1
        elif ip > 14 and ip <=28:
            adquierefecha(ip)
            config.logging.info( _39)
            if ip == 28:
                s=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                s.connect(("nebulalisten.com",3001))
                s.send("{0}{1}{2}".format(encabezado39msn2,_39,final39))
                config.logging.info( s.recv(1024))
                s.close()
                _39 =""
            ip+=1
        elif ip > 28 and ip <=42:
            adquierefecha(ip)
            config.logging.info( _39)
            if ip == 42:
                s=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                s.connect(("nebulalisten.com",3001))
                s.send("{0}{1}{2}".format(encabezado39msn3,_39,final39))
                config.logging.info( s.recv(1024))
                s.close()
                _39 =""
            ip+=1
        elif ip > 42 and ip <= 56:
            adquierefecha(ip)
            config.logging.info( _39)
            if ip == 56:
                s=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                s.connect(("nebulalisten.com",3001))
                s.send("{0}{1}{2}".format(encabezado39msn4,_39,final39))
                config.logging.info( s.recv(1024))
                s.close()
                _39 =""
            ip+=1
        else:
            ip=1
    except socket.timeout,e:
        config.logging.debug("-----Time Out socket No hay internet-------")
    time.sleep(120)
