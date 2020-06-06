/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BSMutableSettings, NSString;

@interface XBStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying, NSSecureCoding> {

	BSMutableSettings* _settings;

}

@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) long long style; 
@property (getter=isBackgroundActivityEnabled,nonatomic,readonly) BOOL backgroundActivityEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(BOOL)isHidden;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)_initWithBSSettings:(id)arg1 ;
-(BOOL)isBackgroundActivityEnabled;
@end

