/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString;

@interface ML3DatabaseStatement : NSObject {

	NSString* _sql;
	BOOL _clearBindingsAfterRunning;
	BOOL _isExecuting;
	sqlite3_stmtRef _sqliteStatement;

}

@property (nonatomic,readonly) NSString * sql; 
@property (nonatomic,readonly) sqlite3_stmtRef sqliteStatement;              //@synthesize sqliteStatement=_sqliteStatement - In the implementation block
@property (assign,nonatomic) BOOL clearBindingsAfterRunning;                 //@synthesize clearBindingsAfterRunning=_clearBindingsAfterRunning - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                               //@synthesize isExecuting=_isExecuting - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)isExecuting;
-(int)reset;
-(int)finalizeStatement;
-(int)step;
-(BOOL)isBusy;
-(BOOL)isReadOnly;
-(void)setIsExecuting:(BOOL)arg1 ;
-(int)clearBindings;
-(sqlite3_stmtRef)sqliteStatement;
-(NSString *)sql;
-(BOOL)clearBindingsAfterRunning;
-(void)bindValue:(id)arg1 forParameterAtPosition:(int)arg2 ;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 SQL:(id)arg2 ;
-(void)bindInt:(int)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindInt64:(long long)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindDouble:(double)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindNullForParameterAtPosition:(int)arg1 ;
-(void)bindBytes:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindBytesNoCopy:(const void*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindUTF8String:(const char*)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindUTF8StringNoCopy:(const char*)arg1 forParameterAtPosition:(int)arg2 ;
-(void)bindUTF8StringNoCopy:(const char*)arg1 length:(int)arg2 forParameterAtPosition:(int)arg3 ;
-(void)bindValuesForParameterNames:(id)arg1 ;
-(void)bindValuesInArray:(id)arg1 ;
-(void)setClearBindingsAfterRunning:(BOOL)arg1 ;
@end

