<!DOCTYPE html>
<html class=" ">
<head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
  <meta charset="utf-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">

  <title>usbreset.c</title>

  <meta content="authenticity_token" name="csrf-param" />
<meta content="wRQHmyOIWtm12qoQz25HQcSxak10+Jp6D4UR2TlCzexnrnTyjTd/y50FoqvYIxj1c1U2AfZPWXBMZN8AS0cocA==" name="csrf-token" />
  <meta name="viewport" content="width=960">


    <link type="text/plain" rel="author" href="https://github.com/humans.txt" />
    <meta content="gist" name="octolytics-app-id" /><meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="BD9B11E2:0FE9:93B763:537BD7B0" name="octolytics-dimension-request_id" />

  <link href="https://gist-assets.github.com/assets/application-07a4566decd7183abee787f77167a9da.css" media="screen, print" rel="stylesheet" />
  <script src="https://gist-assets.github.com/assets/application-1e156ed55984e6a5f9664b24fc8b4ebc.js"></script>

      <meta name="twitter:card" content="summary">
  <meta name="twitter:site" content="@github">
  <meta property="og:title" content="x2q/usbreset.c">
  <meta property="og:type" content="githubog:gist">
  <meta property="og:url" content="https://gist.github.com/x2q/5124616">
  <meta property="og:image" content="https://avatars2.githubusercontent.com/u/245963?s=140">
  <meta property="og:site_name" content="GitHub Gists">
  <meta property="og:description" content="Gist is a simple way to share snippets of text and code with others.">
  <meta name="description" content="Gist is a simple way to share snippets of text and code with others.">


</head>

<body class=" "
  data-plan="">

  <div id="wrapper">
    

    <div id="header" class="header header-logged-out">
      <div class="container" class="clearfix">
        <a class="header-logo-wordmark" href="https://gist.github.com/">
          <span class="octicon octicon-logo-github"></span>
          <span class="octicon-logo octicon-logo-gist"></span>
        </a>

        <div class="header-actions">
          <a class="button primary" href="https://github.com/signup?return_to=gist">Sign up for a GitHub account</a>
          <a class="button" href="https://gist.github.com/login?return_to=%2Fx2q%2F5124616" data-skip-pjax>Sign in</a>
        </div>
        <div class="divider-vertical"></div>
        <div class="topsearch">
  <form id="top_search_form" action="/search" data-pjax-remote=push accept-charset="UTF-8">
    <div class="search">
      <input type="text" class="search js-search js-navigation-enable " name="q" placeholder="Search&#x2026;" data-hotkey="/" autocomplete=off autocorrect=off value="" >

    </div>
    <div class="divider-vertical"></div>
  </form>
  <ul class="top-nav">
    <li class="explore"><a href="/discover">All Gists</a></li>
  </ul>
</div>

      </div>
    </div>

    <div class="site-content" id="js-pjax-container" data-pjax-container>
      <div class=" site-container js-site-container" data-url="/x2q/5124616">
  
  

<meta content="true" name="octolytics-dimension-public" /><meta content="5124616" name="octolytics-dimension-gist_id" /><meta content="5124616" name="octolytics-dimension-gist_name" /><meta content="false" name="octolytics-dimension-anonymous" /><meta content="245963" name="octolytics-dimension-owner_id" /><meta content="x2q" name="octolytics-dimension-owner_login" /><meta content="false" name="octolytics-dimension-forked" />

<div class="pagehead repohead">
  <div class="container">
    <div class="title-actions-bar">
      <ul class="pagehead-actions">


      </ul>
      <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public" >
        <span class="repo-label"><span class="" >public</span></span>
        <span class="mega-octicon octicon-gist" ></span>
        <div class="meta">
          <div class="gist-author">
            <img src="https://avatars2.githubusercontent.com/u/245963?s=140" width="26" height="26">
            <span class="author vcard">
                <span itemprop="title"><a href="/x2q">x2q</a></span>
            </span> /
            <strong><a href="/x2q/5124616" class="js-current-repository">usbreset.c</a></strong>
          </div>
          <div class="gist-timestamp">
              <span class="datetime">Last active <time class="js-relative-date" title="2014-01-06T15:22:39Z" datetime="2014-01-06T15:22:39Z">2014-01-06</time></span>
          </div>
      </h1>
    </div>

  </div>
</div>


<div class="gist container js-gist-container"
  data-version="bf21dbda4a67de2c2d15d6c66b1e1bd0b1db7e1b"
  data-created="false"
  data-updated="false">

    <div class="root-pane">
  <div class="menu-container">
    <ul class="menu gisttabs">
      <li>
        <a href="/x2q/5124616" class="selected">
          Gist Detail
        </a>
      </li>

        <li class="revision-count">
          <a href="/x2q/5124616/revisions" >
            Revisions
            <span class="counter">1</span>
          </a>
        </li>

        <li>
          <a href="/x2q/5124616/stars" >
            Stars
            <span class="counter">1</span>
          </a>
        </li>

    </ul>
  </div>

  <ul class="export-references">
    <li>
      <a href="/x2q/5124616/download" class="minibutton" data-skip-pjax="true" rel="nofollow"><span class="octicon octicon-cloud-download"></span>Download Gist</a>
    </li>
    <li>
      <label for="url-field"><strong>Clone</strong> this gist</label>
      <input type="text" readonly spellcheck="false" class="url-field js-url-field js-copy-toggle" name="url-field" value="https://gist.github.com/5124616.git">
    </li>
    <li>
      <label for="embed-field"><strong>Embed</strong> this gist</label>
      <input type="text" readonly spellcheck="false" class="url-field js-url-field" name="embed-field" value="&lt;script src=&quot;https://gist.github.com/x2q/5124616.js&quot;&gt;&lt;/script&gt;">
    </li>
    <li>
      <label for="link-field"><strong>Link to</strong> this gist</label>
      <input type="text" readonly spellcheck="false" class="url-field js-url-field" name="link-field" value="https://gist.github.com/x2q/5124616">
    </li>
  </ul>
</div>


  <div class="column files">
        <div id="file-usbreset-c" class="bubble">
          <div class="file-box ">
            <div class="meta">
              <div class="file-info">
                <span class="file-type-icon"><span class="octicon octicon-gist"></span></span>
                <strong class="file-name js-selectable-text">usbreset.c</strong>
              </div>
              <div class="file-actions">
                <span class="file-language">C</span>
                <ul class="button-group">
                  <li><a aria-label="Permalink" href="#file-usbreset-c" class="file-actions-button tooltipped tooltipped-s permalink"><span class="octicon octicon-link"></span></a></li>
                  <li><a aria-label="View Raw" href="/x2q/5124616/raw/3f6e5f144efab2bc8e9d02b95b8301e1e0eab669/usbreset.c" data-skip-pjax class="file-actions-button tooltipped tooltipped-s raw-url js-view-raw"><span class="octicon octicon-code"></span></a></li>
                </ul>
              </div>
            </div>
            <div class="suppressed">
              <a class="js-show-suppressed-file">File suppressed. Click to show.</a>
            </div>
            



    <div class="file-data">
      <table cellpadding="0" cellspacing="0" class="lines highlight">
        <tr>
          <td class="line-numbers">
            <span class="line-number" id="file-usbreset-c-L1" rel="file-usbreset-c-L1">1</span>
            <span class="line-number" id="file-usbreset-c-L2" rel="file-usbreset-c-L2">2</span>
            <span class="line-number" id="file-usbreset-c-L3" rel="file-usbreset-c-L3">3</span>
            <span class="line-number" id="file-usbreset-c-L4" rel="file-usbreset-c-L4">4</span>
            <span class="line-number" id="file-usbreset-c-L5" rel="file-usbreset-c-L5">5</span>
            <span class="line-number" id="file-usbreset-c-L6" rel="file-usbreset-c-L6">6</span>
            <span class="line-number" id="file-usbreset-c-L7" rel="file-usbreset-c-L7">7</span>
            <span class="line-number" id="file-usbreset-c-L8" rel="file-usbreset-c-L8">8</span>
            <span class="line-number" id="file-usbreset-c-L9" rel="file-usbreset-c-L9">9</span>
            <span class="line-number" id="file-usbreset-c-L10" rel="file-usbreset-c-L10">10</span>
            <span class="line-number" id="file-usbreset-c-L11" rel="file-usbreset-c-L11">11</span>
            <span class="line-number" id="file-usbreset-c-L12" rel="file-usbreset-c-L12">12</span>
            <span class="line-number" id="file-usbreset-c-L13" rel="file-usbreset-c-L13">13</span>
            <span class="line-number" id="file-usbreset-c-L14" rel="file-usbreset-c-L14">14</span>
            <span class="line-number" id="file-usbreset-c-L15" rel="file-usbreset-c-L15">15</span>
            <span class="line-number" id="file-usbreset-c-L16" rel="file-usbreset-c-L16">16</span>
            <span class="line-number" id="file-usbreset-c-L17" rel="file-usbreset-c-L17">17</span>
            <span class="line-number" id="file-usbreset-c-L18" rel="file-usbreset-c-L18">18</span>
            <span class="line-number" id="file-usbreset-c-L19" rel="file-usbreset-c-L19">19</span>
            <span class="line-number" id="file-usbreset-c-L20" rel="file-usbreset-c-L20">20</span>
            <span class="line-number" id="file-usbreset-c-L21" rel="file-usbreset-c-L21">21</span>
            <span class="line-number" id="file-usbreset-c-L22" rel="file-usbreset-c-L22">22</span>
            <span class="line-number" id="file-usbreset-c-L23" rel="file-usbreset-c-L23">23</span>
            <span class="line-number" id="file-usbreset-c-L24" rel="file-usbreset-c-L24">24</span>
            <span class="line-number" id="file-usbreset-c-L25" rel="file-usbreset-c-L25">25</span>
            <span class="line-number" id="file-usbreset-c-L26" rel="file-usbreset-c-L26">26</span>
            <span class="line-number" id="file-usbreset-c-L27" rel="file-usbreset-c-L27">27</span>
            <span class="line-number" id="file-usbreset-c-L28" rel="file-usbreset-c-L28">28</span>
            <span class="line-number" id="file-usbreset-c-L29" rel="file-usbreset-c-L29">29</span>
            <span class="line-number" id="file-usbreset-c-L30" rel="file-usbreset-c-L30">30</span>
            <span class="line-number" id="file-usbreset-c-L31" rel="file-usbreset-c-L31">31</span>
            <span class="line-number" id="file-usbreset-c-L32" rel="file-usbreset-c-L32">32</span>
            <span class="line-number" id="file-usbreset-c-L33" rel="file-usbreset-c-L33">33</span>
            <span class="line-number" id="file-usbreset-c-L34" rel="file-usbreset-c-L34">34</span>
            <span class="line-number" id="file-usbreset-c-L35" rel="file-usbreset-c-L35">35</span>
            <span class="line-number" id="file-usbreset-c-L36" rel="file-usbreset-c-L36">36</span>
            <span class="line-number" id="file-usbreset-c-L37" rel="file-usbreset-c-L37">37</span>
            <span class="line-number" id="file-usbreset-c-L38" rel="file-usbreset-c-L38">38</span>
            <span class="line-number" id="file-usbreset-c-L39" rel="file-usbreset-c-L39">39</span>
            <span class="line-number" id="file-usbreset-c-L40" rel="file-usbreset-c-L40">40</span>
            <span class="line-number" id="file-usbreset-c-L41" rel="file-usbreset-c-L41">41</span>
            <span class="line-number" id="file-usbreset-c-L42" rel="file-usbreset-c-L42">42</span>
            <span class="line-number" id="file-usbreset-c-L43" rel="file-usbreset-c-L43">43</span>
            <span class="line-number" id="file-usbreset-c-L44" rel="file-usbreset-c-L44">44</span>
            <span class="line-number" id="file-usbreset-c-L45" rel="file-usbreset-c-L45">45</span>
            <span class="line-number" id="file-usbreset-c-L46" rel="file-usbreset-c-L46">46</span>
            <span class="line-number" id="file-usbreset-c-L47" rel="file-usbreset-c-L47">47</span>
            <span class="line-number" id="file-usbreset-c-L48" rel="file-usbreset-c-L48">48</span>
          </td>
          <td class="line-data">
            <pre class="line-pre"><div class="line" id="file-usbreset-c-LC1"><span class="cm">/* usbreset -- send a USB port reset to a USB device</span></div><div class="line" id="file-usbreset-c-LC2"><span class="cm"> *</span></div><div class="line" id="file-usbreset-c-LC3"><span class="cm"> * Compile using: gcc -o usbreset usbreset.c</span></div><div class="line" id="file-usbreset-c-LC4"><span class="cm"> *</span></div><div class="line" id="file-usbreset-c-LC5"><span class="cm"> *</span></div><div class="line" id="file-usbreset-c-LC6"><span class="cm"> * */</span></div><div class="line" id="file-usbreset-c-LC7">&nbsp;</div><div class="line" id="file-usbreset-c-LC8">&nbsp;</div><div class="line" id="file-usbreset-c-LC9">&nbsp;</div><div class="line" id="file-usbreset-c-LC10">&nbsp;</div><div class="line" id="file-usbreset-c-LC11"><span class="cp">#include &lt;stdio.h&gt;</span></div><div class="line" id="file-usbreset-c-LC12"><span class="cp">#include &lt;unistd.h&gt;</span></div><div class="line" id="file-usbreset-c-LC13"><span class="cp">#include &lt;fcntl.h&gt;</span></div><div class="line" id="file-usbreset-c-LC14"><span class="cp">#include &lt;errno.h&gt;</span></div><div class="line" id="file-usbreset-c-LC15"><span class="cp">#include &lt;sys/ioctl.h&gt;</span></div><div class="line" id="file-usbreset-c-LC16">&nbsp;</div><div class="line" id="file-usbreset-c-LC17"><span class="cp">#include &lt;linux/usbdevice_fs.h&gt;</span></div><div class="line" id="file-usbreset-c-LC18">&nbsp;</div><div class="line" id="file-usbreset-c-LC19">&nbsp;</div><div class="line" id="file-usbreset-c-LC20"><span class="kt">int</span> <span class="nf">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">**</span><span class="n">argv</span><span class="p">)</span></div><div class="line" id="file-usbreset-c-LC21"><span class="p">{</span></div><div class="line" id="file-usbreset-c-LC22">	<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">filename</span><span class="p">;</span></div><div class="line" id="file-usbreset-c-LC23">	<span class="kt">int</span> <span class="n">fd</span><span class="p">;</span></div><div class="line" id="file-usbreset-c-LC24">	<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class="line" id="file-usbreset-c-LC25">&nbsp;</div><div class="line" id="file-usbreset-c-LC26">	<span class="k">if</span> <span class="p">(</span><span class="n">argc</span> <span class="o">!=</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="file-usbreset-c-LC27">		<span class="n">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="s">&quot;Usage: usbreset device-filename</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class="line" id="file-usbreset-c-LC28">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span></div><div class="line" id="file-usbreset-c-LC29">	<span class="p">}</span></div><div class="line" id="file-usbreset-c-LC30">	<span class="n">filename</span> <span class="o">=</span> <span class="n">argv</span><span class="p">[</span><span class="mi">1</span><span class="p">];</span></div><div class="line" id="file-usbreset-c-LC31">&nbsp;</div><div class="line" id="file-usbreset-c-LC32">	<span class="n">fd</span> <span class="o">=</span> <span class="n">open</span><span class="p">(</span><span class="n">filename</span><span class="p">,</span> <span class="n">O_WRONLY</span><span class="p">);</span></div><div class="line" id="file-usbreset-c-LC33">	<span class="k">if</span> <span class="p">(</span><span class="n">fd</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="file-usbreset-c-LC34">		<span class="n">perror</span><span class="p">(</span><span class="s">&quot;Error opening output file&quot;</span><span class="p">);</span></div><div class="line" id="file-usbreset-c-LC35">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span></div><div class="line" id="file-usbreset-c-LC36">	<span class="p">}</span></div><div class="line" id="file-usbreset-c-LC37">&nbsp;</div><div class="line" id="file-usbreset-c-LC38">	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;Resetting USB device %s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">filename</span><span class="p">);</span></div><div class="line" id="file-usbreset-c-LC39">	<span class="n">rc</span> <span class="o">=</span> <span class="n">ioctl</span><span class="p">(</span><span class="n">fd</span><span class="p">,</span> <span class="n">USBDEVFS_RESET</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class="line" id="file-usbreset-c-LC40">	<span class="k">if</span> <span class="p">(</span><span class="n">rc</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class="line" id="file-usbreset-c-LC41">		<span class="n">perror</span><span class="p">(</span><span class="s">&quot;Error in ioctl&quot;</span><span class="p">);</span></div><div class="line" id="file-usbreset-c-LC42">		<span class="k">return</span> <span class="mi">1</span><span class="p">;</span></div><div class="line" id="file-usbreset-c-LC43">	<span class="p">}</span></div><div class="line" id="file-usbreset-c-LC44">	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;Reset successful</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class="line" id="file-usbreset-c-LC45">&nbsp;</div><div class="line" id="file-usbreset-c-LC46">	<span class="n">close</span><span class="p">(</span><span class="n">fd</span><span class="p">);</span></div><div class="line" id="file-usbreset-c-LC47">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class="line" id="file-usbreset-c-LC48"><span class="p">}</span></div></pre>
          </td>
        </tr>
      </table>
    </div>

          </div>
        </div>
    <div id="comments" class="new-comments">
      
    </div>
      <p class="uncommentable"><span class="octicon octicon-alert"></span> Please <a href="/login?return_to=/x2q/5124616" rel="nofollow">sign in</a> to comment on this gist.</p>
  </div>
</div>

  <div class="context-overlay"></div>
</div>

    </div>
    <div class="slow-loading-overlay"></div>
  </div>

  <div id="ajax-error-message" class="flash flash-error">
    <div class="container">
      <span class="octicon octicon-alert"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="octicon octicon-remove-close ajax-error-dismiss"></a>
    </div>
  </div>


  <footer>
    <div id="footer">
  <div class="container clearfix">

    <!-- Served fresh by github-fe102-cp1-prd.iad.github.net -->
    <p class="right">&copy; 2014 GitHub Inc. All rights reserved.</p>
    <a class="left" href="/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>
    <ul id="legal">
      <li><a href="https://github.com/blog">The GitHub Blog</a></li>
      <li><a href="https://github.com/site/terms">Terms</a></li>
      <li><a href="https://github.com/site/privacy">Privacy</a></li>
      <li><a href="mailto:support@github.com">Support</a></li>
      <li><a href="https://github.com/contact">Contact</a></li>
    </ul>

  </div><!-- /.container -->
</div><!-- /.#footer -->

  </footer>

</body>
</html>
