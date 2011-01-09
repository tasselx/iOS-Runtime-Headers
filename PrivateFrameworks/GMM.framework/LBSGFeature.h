/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, LBSGRectangle, LBSGLatLng, LBSGAddress;



@interface LBSGFeature : PBCodable 
{
    NSString *_name;
    NSInteger _featureType;
    LBSGAddress *_address;
    LBSGRectangle *_bounds;
    LBSGLatLng *_center;
}

@property(readonly) BOOL hasBounds;
@property(readonly) BOOL hasCenter;
@property(retain) LBSGLatLng *center; /* unknown property attribute: V_center */
@property(retain) LBSGRectangle *bounds; /* unknown property attribute: V_bounds */
@property(retain) LBSGAddress *address; /* unknown property attribute: V_address */
@property NSInteger featureType; /* unknown property attribute: V_featureType */
@property(retain) NSString *name; /* unknown property attribute: V_name */


- (id)init;
- (void)dealloc;
- (BOOL)hasBounds;
- (BOOL)hasCenter;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)center;
- (void)setCenter:(id)arg1;
- (id)bounds;
- (void)setBounds:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (NSInteger)featureType;
- (void)setFeatureType:(NSInteger)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end