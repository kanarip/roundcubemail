<?php
    $_SESSION['writeable_abook'] = $RCMAIL->get_address_sources(true) ? true : false;
