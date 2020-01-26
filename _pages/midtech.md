---
layout: default
title: Middle Tech Activiteiten
permalink: /midtech
pagination: 
  enabled: false
---
<!-- Tech Selector
================================================== -->
<div class="filterbutton">
  <a href="/lowtech"
    >Low Tech</a>
  <a class="btnactive" href="/midtech"
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
        
        {% if post.medtech%}

          {% include postbox.html %}
          
        {% endif %}

        {% endfor %}

    </div>

</section>


