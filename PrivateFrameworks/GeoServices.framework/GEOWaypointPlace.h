/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying> {
    GEOLatLng *_center;
    NSMutableArray *_roadAccessPoints;
}

@property(retain) GEOLatLng * center;
@property(readonly) bool hasCenter;
@property(retain) NSMutableArray * roadAccessPoints;

- (void)addRoadAccessPoint:(id)arg1;
- (id)center;
- (void)clearRoadAccessPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (id)roadAccessPoints;
- (unsigned long long)roadAccessPointsCount;
- (void)setCenter:(id)arg1;
- (void)setRoadAccessPoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end