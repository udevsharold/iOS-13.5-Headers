/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXFontAttributes.h>
#import <libobjc.A.dylib/SXFontAttributes.h>

@class NSString;

@interface SXTextSourceFontAttributes : SXFontAttributes <SXFontAttributes> {

	NSString* _familyName;
	long long _style;
	long long _weight;
	long long _width;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) long long weight;                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long width;                     //@synthesize width=_width - In the implementation block
+(id)attributesWithFamilyName:(id)arg1 style:(long long)arg2 weight:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
-(long long)style;
-(long long)width;
-(long long)weight;
@end

