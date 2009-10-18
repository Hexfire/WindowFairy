// -------------------------------------------------------
// WindowManager.h
//
// Copyright (c) 2009 Jakub Suder <jakub.suder@gmail.com>
// -------------------------------------------------------

#import <Foundation/Foundation.h>

@interface WindowManager : NSObject {
  NSArray *windowList;
}

- (void) reloadWindowList;

@property (retain) NSArray *windowList;

@end