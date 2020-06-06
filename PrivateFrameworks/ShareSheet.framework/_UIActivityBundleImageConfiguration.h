/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, NSString;

@interface _UIActivityBundleImageConfiguration : NSObject <NSSecureCoding> {

	UIImage* _fetchedImage;
	NSString* _imageName;
	NSString* _bundlePath;
	long long _activityCategory;

}

@property (nonatomic,copy) NSString * imageName;                      //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                     //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign,nonatomic) long long activityCategory;              //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,readonly) UIImage * fetchedImage; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundlePath;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setActivityCategory:(long long)arg1 ;
-(long long)activityCategory;
-(UIImage *)fetchedImage;
-(id)initWithImageName:(id)arg1 bundlePath:(id)arg2 activityCategory:(long long)arg3 ;
@end

