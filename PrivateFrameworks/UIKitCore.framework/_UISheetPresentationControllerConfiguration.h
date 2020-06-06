/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding> {

	BOOL __wantsFullScreen;
	long long __mode;

}

@property (assign,setter=_setWantsFullScreen:,nonatomic) BOOL _wantsFullScreen;              //@synthesize _wantsFullScreen=__wantsFullScreen - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long _mode;                               //@synthesize _mode=__mode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_fullScreenConfiguration;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_mode;
-(BOOL)_wantsFullScreen;
-(void)_setMode:(long long)arg1 ;
-(void)_setWantsFullScreen:(BOOL)arg1 ;
@end

