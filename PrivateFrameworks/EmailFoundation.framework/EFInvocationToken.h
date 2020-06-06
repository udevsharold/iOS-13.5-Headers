/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFInvocable.h>

@class NSLock, NSMutableArray, NSString;

@interface EFInvocationToken : NSObject <EFInvocable> {

	NSLock* _lock;
	NSMutableArray* _blocks;
	BOOL _isInvoked;
	NSString* _label;

}

@property (getter=isInvoked,readonly) BOOL invoked; 
@property (nonatomic,copy,readonly) NSString * label;               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptionString;
+(id)tokenWithLabel:(id)arg1 invocationBlock:(/*^block*/id)arg2 ;
+(id)tokenWithInvocationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)invoke;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(BOOL)isInvoked;
-(void)addInvocationBlock:(/*^block*/id)arg1 ;
-(void)removeAllInvocationBlocks;
-(id)_nts_consumeBlocks;
-(void)addInvocable:(id)arg1 ;
@end

