/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NSMetadataQueryResultGroup : NSObject {

	id _private[9];
	unsigned long long _private2[1];
	void* _reserved;

}

@property (copy,readonly) NSString * attribute; 
@property (retain,readonly) id value; 
@property (copy,readonly) NSArray * subgroups; 
@property (readonly) unsigned long long resultCount; 
@property (copy,readonly) NSArray * results; 
-(void)dealloc;
-(unsigned long long)resultCount;
-(id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4 ;
-(void)_addResult:(unsigned long long)arg1 ;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(NSArray *)results;
-(NSString *)attribute;
-(id)value;
-(NSArray *)subgroups;
-(void)_zapResultArray;
@end

