/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MLVersionInfo : NSObject {

	long long _majorVersion;
	long long _minorVersion;
	long long _patchVersion;
	NSString* _variantString;

}

@property (readonly) long long majorVersion;                                //@synthesize majorVersion=_majorVersion - In the implementation block
@property (readonly) long long minorVersion;                                //@synthesize minorVersion=_minorVersion - In the implementation block
@property (readonly) long long patchVersion;                                //@synthesize patchVersion=_patchVersion - In the implementation block
@property (readonly) NSString * variantString;                              //@synthesize variantString=_variantString - In the implementation block
@property (nonatomic,readonly) NSString * versionNumberString; 
@property (nonatomic,readonly) NSString * versionString; 
+(id)versionInfoWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4 ;
+(id)versionInfoWithString:(id)arg1 ;
-(NSString *)versionString;
-(id)initWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4 ;
-(NSString *)versionNumberString;
-(BOOL)olderThan:(id)arg1 ;
-(long long)majorVersion;
-(long long)minorVersion;
-(long long)patchVersion;
-(NSString *)variantString;
@end

