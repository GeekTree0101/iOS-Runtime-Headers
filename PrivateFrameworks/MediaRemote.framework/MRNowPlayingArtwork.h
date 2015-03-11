/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingArtwork : NSObject {
}

@property(readonly) bool hasArtworkData;
@property(readonly) unsigned int type;

+ (id)nowPlayingArtworkFromXPCDictionary:(id)arg1;

- (void)bindToXPCDictionary:(id)arg1;
- (id)copyImageData;
- (bool)hasArtworkData;
- (unsigned int)type;

@end