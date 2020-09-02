<div id="page-wrapper-iframe">
  <div id="page">
    <?php if ($messages): ?>
      <div id="messages">
        <div class="section clearfix">
          <?php print $messages; ?>
        </div>
      </div> <!-- /.section, /#messages -->
    <?php endif; ?>

    <div id="main-wrapper-iframe" class="clearfix">
      <div id="main" class="clearfix">
        <div id="content" class="column">
          <div class="section">
            <a id="main-content"></a>
            <?php if ($title): ?>
              <h1 class="title" id="page-title">
                <?php print $title; ?>
              </h1>
            <?php endif; ?>
            <?php print render($page['help']); ?>
            <?php print render($page['content']); ?>
          </div> <!-- /.section -->
        </div> <!-- /#content -->
      </div> <!-- /#main -->
    </div> <!-- /#main-wrapper -->
  </div> <!-- /#page -->
</div> <!-- /#page-wrapper -->
