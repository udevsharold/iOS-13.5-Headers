/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDisplaySpec : NSObject {

	long long _contentMode;
	CGSize _targetSize;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) long long contentMode;                  //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;              //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
-(id)init;
-(id)description;
-(id)shortDescription;
-(void)setContentMode:(long long)arg1 ;
-(long long)contentMode;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 normalizedCropRect:(CGRect)arg3 ;
-(BOOL)hasExplicitCrop;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(CGSize)requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(BOOL)isTargetingMaximumSizeWithFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(CGRect)normalizedCropRect;
@end

