/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

	CFURLEnumeratorRef _enumerator;
	/*^block*/id _errorHandler;
	BOOL shouldContinue;
	BOOL isPostOrderDirectory;

}

@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(id)nextObject;
-(id)fileAttributes;
-(id)directoryAttributes;
-(unsigned long long)level;
-(void)skipDescendents;
-(void)skipDescendants;
-(BOOL)isEnumeratingDirectoryPostOrder;
-(void)setErrorHandler:(id)arg1 ;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)errorHandler;
@end

