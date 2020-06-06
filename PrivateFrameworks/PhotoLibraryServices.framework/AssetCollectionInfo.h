/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSDate;

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {

	BOOL _isMine;
	BOOL _isVideo;
	BOOL _isPhotoIris;
	BOOL _isDeletable;
	unsigned short _playbackVariation;
	NSString* _GUID;
	NSString* _personID;
	NSDictionary* _metaData;
	NSNumber* _width;
	NSNumber* _height;
	NSDate* _timestamp;
	NSString* _derivativeUTI;

}

@property (getter=UID,nonatomic,readonly) NSString * GUID;                    //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * personID;                           //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) BOOL isMine;                                   //@synthesize isMine=_isMine - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                  //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIris;                              //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) unsigned short playbackVariation;              //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,readonly) BOOL isDeletable;                              //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,readonly) NSDictionary * metaData;                       //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,readonly) NSNumber * width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSNumber * height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSString * derivativeUTI;                      //@synthesize derivativeUTI=_derivativeUTI - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(BOOL)isDeletable;
-(NSNumber *)width;
-(NSNumber *)height;
-(BOOL)isVideo;
-(NSDictionary *)metaData;
-(NSString *)personID;
-(NSString *)GUID;
-(BOOL)isPhotoIris;
-(unsigned short)playbackVariation;
-(id)initWithAssetCollection:(id)arg1 ;
-(BOOL)isMine;
-(NSString *)derivativeUTI;
@end

