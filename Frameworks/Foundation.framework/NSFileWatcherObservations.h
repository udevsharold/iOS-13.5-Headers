/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSFileWatcherObservations : NSObject {

	BOOL _attributesChanged;
	BOOL _contentsChanged;
	BOOL _deleted;
	BOOL _moved;
	NSString* _lastObservedPath;
	BOOL _didResetPath;
	NSString* _path;

}
-(void)dealloc;
-(id)description;
-(id)initWithPath:(id)arg1 ;
-(void)addAttributeChange;
-(void)addContentsChange;
-(void)addDeletion;
-(void)addDetectedMoveToPath:(id)arg1 ;
-(void)addAnnouncedMoveToPath:(id)arg1 ;
-(void)notifyObserver:(/*^block*/id)arg1 ;
@end

