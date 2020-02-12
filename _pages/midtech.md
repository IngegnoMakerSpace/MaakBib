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
  <a href="{{ site.baseurl }}/lowtech"
    >Low Tech</a>
  <a class="btnactive" href="{{ site.baseurl }}/midtech"
    >Middle Tech</a>
  <a href="{{ site.baseurl }}/hightech"
    >High Tech</a>
  <a href="{{ site.baseurl }}/">Alle</a>
</div>


<!-- Posts Index
================================================== -->
<section class="recent-posts">

    <div class="section-title">

        <h2><span>Middle Tech Activiteiten</span></h2>

    </div>

    <div class="row listrecent">

        {% for post in site.posts %}
        
        {% if post.midtech%}

          {% include postbox.html %}
          
        {% endif %}

        {% endfor %}

    </div>

</section>


