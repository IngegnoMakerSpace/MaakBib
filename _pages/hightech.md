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
    >Low Tech</a>
  <a href="/midtech"
    >Middle Tech</a>
  <a class="btnactive" href="/hightech"
    >High Tech</a>
  <a href="/">Alle</a>
</div>


<!-- Posts Index
================================================== -->
<section class="recent-posts">

    <div class="section-title">

        <h2><span>High Tech Activiteiten</span></h2>

    </div>

    <div class="row listrecent">

        {% for post in site.posts %}
        
        {% if post.hightech%}

          {% include postbox.html %}
          
        {% endif %}

        {% endfor %}

    </div>

</section>


