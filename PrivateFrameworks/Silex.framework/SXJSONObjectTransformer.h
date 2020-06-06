/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXJSONObjectTransforming.h>

@class NSString;

@interface SXJSONObjectTransformer : NSObject <SXJSONObjectTransforming> {

	NSString* _key;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) id block;                       //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)concatenatingTransformerWithKey:(id)arg1 ;
+(id)transformerWithKey:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)mergingTransformerWithKey:(id)arg1 ;
-(NSString *)key;
-(id)block;
-(id)transformKey:(id)arg1 ;
-(id)transformObject:(id)arg1 otherObject:(id)arg2 ;
@end

