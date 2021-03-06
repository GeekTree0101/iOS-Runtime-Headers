/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleListArticleMetadata : NSObject <FCHeadlineMetadata> {
    NSDictionary * _dictionary;
    NSDate * _displayDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, retain) NSDate *displayDate;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isTreatedAsNew;
@property (nonatomic, readonly) NSString *storyType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)displayDate;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isTreatedAsNew;
- (void)setDictionary:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (id)storyType;

@end
