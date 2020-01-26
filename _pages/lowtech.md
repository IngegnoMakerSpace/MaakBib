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
    >Low Tech</a>
  <a href="/midtech"
    >Middle Tech</a>
  <a href="/hightech"
    >High Tech</a>
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


