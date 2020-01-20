---
layout: default
title: Wist je dat... Wij leggen het uit!
permalink: /wistjedat
pagination: 
  enabled: false
---

<!-- Posts Index
================================================== -->
<section class="recent-posts">

    <div class="section-title">

        <h2><span>Wist je dat... Wij leggen het uit!</span></h2>

    </div>

    <div class="row listrecent">

        {% for post in site.wistjedat %}
        
        {% include postbox.html %}

        {% endfor %}

    </div>

</section>


