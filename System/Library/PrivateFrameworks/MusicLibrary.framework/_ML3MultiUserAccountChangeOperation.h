/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MSVAsyncOperation.h>

@protocol MLMediaLibraryAccountChangeObserver;
@class NSString;

@interface _ML3MultiUserAccountChangeOperation : MSVAsyncOperation {

	NSString* _databasePath;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;

}

@property (nonatomic,copy,readonly) NSString * databasePath;                                                    //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic,__weak) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
-(NSString *)databasePath;
-(void)execute;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(id)initWithDatabasePath:(id)arg1 accountChangeObserver:(id)arg2 ;
@end
