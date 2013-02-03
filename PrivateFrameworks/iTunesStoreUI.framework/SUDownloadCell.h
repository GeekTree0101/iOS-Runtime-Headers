/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUDownloadCellProgressBar, UIButton;

@interface SUDownloadCell : SUGridTableViewCell {
    UIButton *_accessoryButton;
    SUDownloadCellProgressBar *_progressBar;
}

- (void)_accessoryButtonAction:(id)arg1;
- (BOOL)_isDownloadResumable:(id)arg1;
- (void)_reloadAccessoryButton;
- (void)_reloadProgressBar;
- (void)dealloc;
- (BOOL)handleTap;
- (void)layoutSubviews;
- (void)reloadForStatusChange;
- (void)setConfiguration:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;

@end