/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface NSObjectAccessibility : NSObjectAccessibility_super {
}

+ (void)_initializeSafeCategory;

- (id)_accessibilityFirstVisibleItem;
- (BOOL)_accessibilityHandlePublicScroll:(int)arg1;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)_accessibilityIsScrollable;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (void)_accessibilityScrollDownPage;
- (void)_accessibilityScrollLeftPage;
- (BOOL)_accessibilityScrollNextPage;
- (BOOL)_accessibilityScrollPreviousPage;
- (void)_accessibilityScrollRightPage;
- (void)_accessibilityScrollToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_accessibilityScrollToVisible;
- (void)_accessibilityScrollUpPage;
- (BOOL)_accessibilityScrollingEnabled;
- (id)_accessibilityVisibleItemInList;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollLeftPageSupported;
- (BOOL)accessibilityScrollRightPageSupported;
- (BOOL)accessibilityScrollUpPageSupported;
- (id)accessibilityUserDefinedActivationPoint;
- (id)accessibilityUserDefinedFrame;
- (id)accessibilityUserDefinedHint;
- (id)accessibilityUserDefinedIdentifier;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedLanguage;
- (id)accessibilityUserDefinedTraits;
- (id)accessibilityUserDefinedValue;
- (id)isAccessibilityUserDefinedElement;

@end