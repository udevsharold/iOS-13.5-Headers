/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying> {

	int _placeLevel;
	NSString* _placeName;

}

@property (assign,nonatomic) int placeLevel;                    //@synthesize placeLevel=_placeLevel - In the implementation block
@property (nonatomic,retain) NSString * placeName;              //@synthesize placeName=_placeName - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)placeName;
-(int)placeLevel;
-(void)setPlaceLevel:(int)arg1 ;
-(void)setPlaceName:(NSString *)arg1 ;
@end

