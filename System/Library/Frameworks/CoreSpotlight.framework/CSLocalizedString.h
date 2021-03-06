/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>

@class NSString, NSDictionary;

@interface CSLocalizedString : NSString <CSCoderEncoder> {

	BOOL _didTrySettingDefaultString;
	NSString* _defaultString;
	NSDictionary* _localizedStrings;

}

@property (nonatomic,readonly) NSString * defaultString;                     //@synthesize defaultString=_defaultString - In the implementation block
@property (assign,nonatomic) BOOL didTrySettingDefaultString;                //@synthesize didTrySettingDefaultString=_didTrySettingDefaultString - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(NSDictionary *)localizedStrings;
-(id)localizedString;
-(id)initWithLocalizedStrings:(id)arg1 ;
-(NSString *)defaultString;
-(BOOL)didTrySettingDefaultString;
-(void)setDidTrySettingDefaultString:(BOOL)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
@end

