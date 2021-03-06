/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFTrustObject.h>
#import <libobjc.A.dylib/NFTrustLocalValidation.h>

@protocol NFTrustLocalValidation
@required
-(unsigned char)primitiveLocalValidation;

@end


@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation> {

	unsigned char _primitiveLocalValidation;

}

@property (assign,nonatomic) unsigned char primitiveLocalValidation;              //@synthesize primitiveLocalValidation=_primitiveLocalValidation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localValidationWithPassCode;
+(id)localValidationWithTouchID;
+(id)localValidationWithFaceID;
+(id)withPrimitiveLocalValidation:(unsigned char)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)primitiveLocalValidation;
-(void)setPrimitiveLocalValidation:(unsigned char)arg1 ;
@end

