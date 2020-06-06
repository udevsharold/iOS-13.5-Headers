/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PHMemoryFeature : NSObject <NSSecureCoding> {

	id _subtypeSpecificAttribute;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForType:(unsigned long long)arg1 ;
+(id)personUniversalIdentifierForPersonLocalIdentifier:(id)arg1 photoLibrary:(id)arg2 ;
+(id)personLocalIdentifierForPersonUniversalIdentifier:(id)arg1 photoLibrary:(id)arg2 ;
+(id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)arg1 ;
+(id)timeMemoryFeatureWithDate:(id)arg1 ;
+(id)timeMemoryFeatureWithHolidayForName:(id)arg1 ;
+(id)locationMemoryFeatureWithLocation:(id)arg1 ;
+(id)locationMemoryFeatureWithAreaForName:(id)arg1 ;
+(id)memoryFeatureWithData:(id)arg1 photoLibrary:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)date;
-(id)location;
-(id)personLocalIdentifier;
-(id)encodedDataWithPhotoLibrary:(id)arg1 ;
-(id)holidayName;
-(id)areaName;
-(BOOL)collidesWithFeature:(id)arg1 ;
-(BOOL)collidesWithDate:(id)arg1 ;
-(BOOL)collidesWithHolidayWithName:(id)arg1 ;
-(BOOL)collidesWithLocationAtCoordinates:(CLLocationCoordinate2D)arg1 ;
-(BOOL)collidesWithAreaWithName:(id)arg1 ;
-(BOOL)collidesWithPersonWithLocalIdentifier:(id)arg1 ;
@end

