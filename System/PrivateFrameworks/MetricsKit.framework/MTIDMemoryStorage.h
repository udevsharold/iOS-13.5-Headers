/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTIDStorage.h>

@class NSMutableDictionary, NSString;

@interface MTIDMemoryStorage : NSObject <MTIDStorage> {

	NSMutableDictionary* _namespaces;

}

@property (nonatomic,retain) NSMutableDictionary * namespaces;              //@synthesize namespaces=_namespaces - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)updateNamespace:(id)arg1 options:(id)arg2 resetSeed:(BOOL)arg3 ;
-(id)deleteNamespace:(id)arg1 ;
-(id)optionsForNamespace:(id)arg1 cachePolicy:(long long)arg2 ;
-(NSMutableDictionary *)namespaces;
-(void)setNamespaces:(NSMutableDictionary *)arg1 ;
@end
