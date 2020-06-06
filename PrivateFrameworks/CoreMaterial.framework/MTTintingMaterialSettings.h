/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:03 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <libobjc.A.dylib/MTTinting.h>

@class NSDictionary, NSString;

@interface MTTintingMaterialSettings : NSObject <MTTinting> {

	NSDictionary* _tintColorDescription;
	CGColorRef _tintColor;
	double _tintAlpha;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * tintColorDescription;              //@synthesize tintColorDescription=_tintColorDescription - In the implementation block
@property (nonatomic,readonly) CGColorRef tintColor;                                  //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) double tintAlpha;                                      //@synthesize tintAlpha=_tintAlpha - In the implementation block
-(void)dealloc;
-(CGColorRef)tintColor;
-(NSDictionary *)tintColorDescription;
-(double)tintAlpha;
-(void)_processTintingDescription:(id)arg1 defaultingToIdentity:(BOOL)arg2 ;
-(id)initWithTintingDescription:(id)arg1 andDescendantDescriptions:(id)arg2 ;
@end

