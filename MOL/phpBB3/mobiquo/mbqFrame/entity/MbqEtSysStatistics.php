<?php

defined('MBQ_IN_IT') or exit;

/**
 * system statistics class
 */
Class MbqEtSysStatistics extends MbqBaseEntity {
    
    /* forum statistics */
    public $forumTotalThreads;
    public $forumTotalPosts;
    public $forumTotalMembers;
    public $forumActiveMembers;
    public $forumTotalOnline;
    public $forumGuestOnline;
    
    public function __construct() {
        parent::__construct();
        $this->forumTotalThreads = clone MbqMain::$simpleV;
        $this->forumTotalPosts = clone MbqMain::$simpleV;
        $this->forumTotalMembers = clone MbqMain::$simpleV;
        $this->forumActiveMembers = clone MbqMain::$simpleV;
        $this->forumTotalOnline = clone MbqMain::$simpleV;
        $this->forumGuestOnline = clone MbqMain::$simpleV;
    }
  
}
