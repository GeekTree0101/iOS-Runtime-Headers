/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDScannerObject : NSObject {
    struct __DDScanner { } * _scanner;
    int  _type;
}

- (id)ddResultsWithOptions:(long)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (void)reset;
- (id)resultsWithOptions:(long)arg1;
- (int)scanString:(id)arg1;
- (int)type;

@end