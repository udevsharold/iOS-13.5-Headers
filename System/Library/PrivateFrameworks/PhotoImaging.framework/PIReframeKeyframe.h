/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSDictionary;

@interface PIReframeKeyframe : NSObject {

	SCD_Struct_PI8 _time;
	SCD_Struct_PI9 _homography;

}

@property (nonatomic,readonly) SCD_Struct_PI8 time;                                       //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI9 homography;                                 //@synthesize homography=_homography - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(SCD_Struct_PI8)time;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithTime:(SCD_Struct_PI8)arg1 homography:(SCD_Struct_PI9)arg2 ;
-(SCD_Struct_PI9)homography;
@end

