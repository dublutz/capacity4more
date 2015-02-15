<script type="text/javascript">
  var player;
  function onYouTubePlayerAPIReady() {
    // create the global player from the specific iframe (#video)
    player = new YT.Player('c4mVideo', {
      videoId: '<?php print $video_id ?>'
    });

    jQuery('#c4mVideoModal').click(function() {
      player.pauseVideo();
    });
  }
</script>
<div class="button-wrapper">
  <button type="button" class="btn btn-primary btn-lg" data-toggle="modal" data-target="#c4mVideoModal">
    <?php print $video_title ?>
  </button>
</div>
<div class="modal fade" id="c4mVideoModal" tabindex="-1" role="dialog" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="<?php print t('Close') ?>"><span aria-hidden="true">&times;</span></button>
        <h4 class="modal-title" id="c4dVideoLabel"><?php print $video_title ?></h4>
      </div>
      <div class="modal-body">
        <?php print $video_embed ?>
      </div>
    </div>
  </div>
</div>
