/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject {

	BOOL _hasMaxSupportedSize;
	long long _type;
	NSArray* _supportedSizes;
	CGSize _maxSupportedSize;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * supportedSizes;                //@synthesize supportedSizes=_supportedSizes - In the implementation block
@property (assign,nonatomic) BOOL hasMaxSupportedSize;              //@synthesize hasMaxSupportedSize=_hasMaxSupportedSize - In the implementation block
@property (assign,nonatomic) CGSize maxSupportedSize;               //@synthesize maxSupportedSize=_maxSupportedSize - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSArray *)supportedSizes;
-(void)setSupportedSizes:(NSArray *)arg1 ;
-(BOOL)hasMaxSupportedSize;
-(void)setHasMaxSupportedSize:(BOOL)arg1 ;
-(CGSize)maxSupportedSize;
-(void)setMaxSupportedSize:(CGSize)arg1 ;
@end

