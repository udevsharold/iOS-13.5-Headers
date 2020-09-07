/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBundle.h>
#import <libobjc.A.dylib/CRSIdentifiedServing.h>

@protocol CRSServing;
@class NSString;

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing> {

	id<CRSServing> _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(id)underlyingService;
-(void)_initializeServiceWithClass:(Class)arg1 ;
@end
