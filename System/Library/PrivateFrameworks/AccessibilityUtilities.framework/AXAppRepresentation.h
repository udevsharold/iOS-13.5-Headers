/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXAppRepresentation : NSObject <NSSecureCoding> {

	int _pid;
	NSString* _bundleIdentifier;
	long long _layoutRole;

}

@property (assign,nonatomic) int pid;                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) long long layoutRole;                        //@synthesize layoutRole=_layoutRole - In the implementation block
@property (nonatomic,readonly) BOOL isLayoutPrimary; 
@property (nonatomic,readonly) BOOL isLayoutFullscreenModal; 
+(BOOL)supportsSecureCoding;
+(id)appWithPID:(int)arg1 bundleID:(id)arg2 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(long long)layoutRole;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)_commonInit;
-(void)setLayoutRole:(long long)arg1 ;
-(BOOL)isLayoutPrimary;
-(BOOL)isLayoutFullscreenModal;
@end
