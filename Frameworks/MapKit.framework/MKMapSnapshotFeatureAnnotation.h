/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, VKCustomFeature;

@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {

	long long _representation;
	NSString* _title;
	VKCustomFeature* _customFeature;
	CGSize _coordinate;

}

@property (nonatomic,readonly) long long representation;              //@synthesize representation=_representation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize coordinate;                       //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)coordinate;
-(id)feature;
-(void)setCoordinate:(CGSize)arg1 ;
-(long long)representation;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 representation:(long long)arg3 ;
-(BOOL)showsBalloonCallout;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
@end

