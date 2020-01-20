---
layout: default
title: High Tech Activiteiten
permalink: /hightech
pagination: 
  enabled: false
---
<!-- Tech Selector
================================================== -->
<div class="filterbutton">
  <a href="/lowtech"
    >low tech</a>
  <a href="/medtech"
    >medium tech</a>
  <a class="btnactive" href="/hightech"
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
        
        {% if post.hightech%}

          {% include postbox.html %}
          
        {% endif %}

        {% endfor %}

    </div>

</section>


