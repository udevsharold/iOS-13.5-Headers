/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSProtobufSchemaBuilder.h>

@class NSMutableData, NSString;

@interface BSProtobufSchema : NSObject <BSProtobufSchemaBuilder> {

	Class _rootClass;
	BSProtobufSchema* _superSchema;
	long long _fieldCount;
	long long _autotagIndex;
	BSProtobufFieldEntry* _entries;
	NSMutableData* _memoryData;
	BOOL _respondsToDidFinishProtobufDecodingWithError;
	BOOL _respondsToInitForProtobufDecoding;
	BOOL _respondsToInitProtobufTranslatorForObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithRootClass:(Class)arg1 ;
-(void)addField:(const char*)arg1 forTag:(long long)arg2 ;
-(BSProtobufFieldEntry*)_appendFieldEntriesOfCount:(long long)arg1 ;
-(void)_addSubclassesForField:(const char*)arg1 allowedSubclasses:(id)arg2 assertSubclassRelationship:(BOOL)arg3 ;
-(void)addRepeatingField:(const char*)arg1 forTag:(long long)arg2 allowedClasses:(id)arg3 ;
-(void)addField:(const char*)arg1 ;
-(void)addField:(const char*)arg1 allowedClasses:(id)arg2 ;
-(void)addRepeatingField:(const char*)arg1 containsClass:(Class)arg2 ;
-(void)addRepeatingField:(const char*)arg1 containsClasses:(id)arg2 ;
-(void)addRepeatingField:(const char*)arg1 containsClass:(Class)arg2 forTag:(long long)arg3 ;
@end

