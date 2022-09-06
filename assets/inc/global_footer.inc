
	<footer class="l-footer" itemscope itemtype="http://schema.org/WPFooter">
<?php if ($current_id == 'home'): ?>
		<div class="c-inner -subpage">
<?php else: ?>
		<div class="c-inner -subpage">
<?php endif ?>
			<!-- お問い合わせ --><?php include("component/global_footer_access.inc");?><!-- /お問い合わせ -->

			<!-- inner link --><?php include("component/global_footer_inner_link.inc");?><!-- /inner link -->

			<!-- 組織情報 --><?php include("component/global_footer_organization_info.inc");?><!-- /組織情報 -->
		</div>

		<!-- social --><?php include("component/global_footer_social.inc");?><!-- /social -->

		<!-- copyright --><?php include("component/global_footer_copyright.inc");?><!-- /copyright -->
	</footer>