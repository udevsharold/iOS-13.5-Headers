/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapItemPhotoInfo.h>

@class NSURL, NSString;

@interface _GEOPlaceDataPhotoInfo : NSObject <GEOMapItemPhotoInfo> {

	CGSize _size;
	NSURL* _url;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSURL * url; 
+(id)sortedPhotoInfoFromPhotoVersions:(id)arg1 ;
-(CGSize)size;
-(NSURL *)url;
-(id)initWithPhotoContent:(id)arg1 ;
@end

