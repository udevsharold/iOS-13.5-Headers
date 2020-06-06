/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/_SFKeyAttributes.h>

@class _SFKeySpecifier, NSString;

@interface _SFAsymmetricKeyAttributes : NSObject <_SFKeyAttributes> {

	_SFKeySpecifier* _asymmetricKeySpecifier;
	NSString* _asymmetricKeyDomain;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier;              //@synthesize asymmetricKeySpecifier=_asymmetricKeySpecifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyDomain;                        //@synthesize asymmetricKeyDomain=_asymmetricKeyDomain - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;
-(id)initWithSpecifier:(id)arg1 domain:(id)arg2 ;
@end

