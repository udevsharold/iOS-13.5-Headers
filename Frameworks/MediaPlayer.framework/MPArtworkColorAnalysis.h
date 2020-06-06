/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	UIColor* _backgroundColor;
	BOOL _backgroundColorLight;
	UIColor* _primaryTextColor;
	BOOL _primaryTextColorLight;
	UIColor* _secondaryTextColor;
	BOOL _secondaryTextColorLight;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (getter=isBackgroundColorLight,nonatomic,readonly) BOOL backgroundColorLight;                    //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) UIColor * primaryTextColor;                                                 //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (getter=isPrimaryTextColorLight,nonatomic,readonly) BOOL primaryTextColorLight;                  //@synthesize primaryTextColorLight=_primaryTextColorLight - In the implementation block
@property (nonatomic,readonly) UIColor * secondaryTextColor;                                               //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (getter=isSecondaryTextColorLight,nonatomic,readonly) BOOL secondaryTextColorLight;              //@synthesize secondaryTextColorLight=_secondaryTextColorLight - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(id)_copyWithClass:(Class)arg1 ;
-(BOOL)isBackgroundColorLight;
-(UIColor *)primaryTextColor;
-(BOOL)isPrimaryTextColorLight;
-(UIColor *)secondaryTextColor;
-(BOOL)isSecondaryTextColorLight;
@end

