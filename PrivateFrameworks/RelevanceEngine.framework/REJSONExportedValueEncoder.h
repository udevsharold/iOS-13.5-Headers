/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REExportedValueEncoder.h>

@interface REJSONExportedValueEncoder : REExportedValueEncoder
+(id)_dateFormatter;
-(void)writeObjectStart:(id)arg1 toStream:(id)arg2 ;
-(void)writeObjectValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeObjectEnd:(id)arg1 toStream:(id)arg2 ;
-(void)writeArrayStartToStream:(id)arg1 ;
-(void)writeArrayValuePairToStream:(id)arg1 valueWriter:(/*^block*/id)arg2 isLast:(BOOL)arg3 ;
-(void)writeArrayEndToStream:(id)arg1 ;
-(BOOL)writesArrayHeader;
-(void)writeDictionaryStartToStream:(id)arg1 ;
-(void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(/*^block*/id)arg2 valueWriter:(/*^block*/id)arg3 isLast:(BOOL)arg4 ;
-(void)writeDictionaryEndToStream:(id)arg1 ;
-(BOOL)writesDictionaryHeader;
-(void)writeNumber:(id)arg1 toStream:(id)arg2 ;
-(void)writeString:(id)arg1 toStream:(id)arg2 ;
-(void)writeDate:(id)arg1 toStream:(id)arg2 ;
-(void)writeNullToStream:(id)arg1 ;
-(void)_writeValueAsJSON:(id)arg1 toStream:(id)arg2 ;
@end

