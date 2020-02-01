---
layout: default
title: Wist je dat... Wij leggen het uit!
permalink: /wistjedat
pagination: 
  enabled: false
---
{% assign everything = site.wistjedat | concat: site.draaiboeken | sort: 'title' %}

<!-- Posts Index
================================================== -->
<section class="recent-posts">

    <div class="section-title">

        <h2><span>Wist je dat?</span></h2>
        <p>
        Hier verzamelen we allerlei extra informatie. Van achtergrondinfo bij technieken tot draaiboeken voor hoe een workshop begeleiden 
        </p>
    </div>

    <div class="row listrecent">

        {% for post in everything %}
        
        {% include postbox.html %}

        {% endfor %}

    </div>


</section>


