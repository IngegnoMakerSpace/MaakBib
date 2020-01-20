---
layout: default
title: Low Tech Activiteiten
permalink: /lowtech
pagination: 
  enabled: false
---
<!-- Tech Selector
================================================== -->
<div class="filterbutton">
  <a class="btnactive" href="/lowtech"
    >low tech</a>
  <a href="/medtech"
    >medium tech</a>
  <a href="/hightech"
    >high tech</a>
  <a href="/">Alle</a>
</div>


<!-- Posts Index
================================================== -->
<section class="recent-posts">

    <div class="section-title">

        <h2><span>Low tech Activiteiten</span></h2>

    </div>

    <div class="row listrecent">

        {% for post in site.posts %}
        
        {% if post.lowtech%}

          {% include postbox.html %}
          
        {% endif %}

        {% endfor %}

    </div>

</section>

