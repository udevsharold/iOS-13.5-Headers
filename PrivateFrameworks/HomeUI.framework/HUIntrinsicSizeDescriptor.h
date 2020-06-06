/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSNumber, NSString;

@interface HUIntrinsicSizeDescriptor : NSObject <NAIdentifiable> {

	unsigned long long _flexType;
	NSNumber* _aspectRatio;
	CGSize _intrinsicSize;

}

@property (nonatomic,readonly) CGSize intrinsicSize;                     //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (nonatomic,readonly) unsigned long long flexType;              //@synthesize flexType=_flexType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * aspectRatio;              //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)noIntrinsicSizeDescriptor;
+(id)descriptorWithIntrinsicSize:(CGSize)arg1 flexType:(unsigned long long)arg2 ;
+(id)descriptorWithAspectRatio:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)aspectRatio;
-(CGSize)intrinsicSize;
-(id)initWithIntrinsicSize:(CGSize)arg1 flexType:(unsigned long long)arg2 aspectRatio:(id)arg3 ;
-(unsigned long long)flexType;
@end

